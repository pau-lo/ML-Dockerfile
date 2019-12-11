# ML-Dockerfile
---

A setup for a machine learning dockerfile including a requirements.txt

It can also be altered.


# Running the notebook

docker run -p 8888:8888 -it machine-learning:v1

# Mounting a local volume to your host computer

docker run -d -it --name machine-learning -p 8888:8888 -p 6006:6006 -v /$(pwd):/machinelearning machine-learning:v2
