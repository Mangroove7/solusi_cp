from ultralytics import YOLO
import cv2
import time

# Load model versi OpenVINO (Otomatis deteksi folder hasil export tadi)
# Pastikan folder 'yolov8n_openvino_model' ada di satu folder dengan script ini
model = YOLO('yolov8n_openvino_model/') 

cap = cv2.VideoCapture(0) # Buka webcam

# Set resolusi kamera agar ringan
cap.set(cv2.CAP_PROP_FRAME_WIDTH, 640)
cap.set(cv2.CAP_PROP_FRAME_HEIGHT, 480)

while True:
    start_time = time.time()
    ret, frame = cap.read()
    if not ret: break

    # INFERENCE
    # imgsz=320: Mengorbankan sedikit detail untuk speed ekstrem
    # conf=0.5: Hanya deteksi kalau yakin > 50%
    results = model(frame, imgsz=320, conf=0.5, verbose=False)

    # Hitung FPS Real-time
    end_time = time.time()
    fps = 1 / (end_time - start_time)

    # Gambar kotak hasil deteksi
    annotated_frame = results[0].plot()

    # Tampilkan FPS di layar
    cv2.putText(annotated_frame, f"FPS: {fps:.2f}", (10, 30), 
                cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 255, 0), 2)

    cv2.imshow("Optimized YOLOv8 - Intel i9", annotated_frame)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()