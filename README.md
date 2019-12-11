# ML-Dockerfile
---

A setup for a machine learning dockerfile including a requirements.txt

It can also be altered.

# Building the Dockerfile

Once you are in the current directory just run the following command:
`docker build . -t machine-learning:v1` 

Image will be name machine-learning:v1

# Running the notebook

docker run -p 8888:8888 -it machine-learning:v1

# Mounting a local volume to your host computer

docker run -d -it --name machine-learning -p 8888:8888 -p 6006:6006 -v /$(pwd):/machinelearning machine-learning:v2
