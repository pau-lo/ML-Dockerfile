# Base image
FROM python:3.7
LABEL MAINTAINER="2Create"

# Updating repository sources
RUN apt-get update

# Copying requirements.txt file
COPY ./requirements.txt /requirements.txt
# pip install
RUN pip install --no-cache -r /requirements.txt

# creating a directory to work on
RUN mkdir /machine_learning
WORKDIR /machine_learning
COPY ./machine_learning /machine_learning

# RUN adduser -D paulo
# USER paulo

# Exposing ports
EXPOSE 8888

# Running jupyter notebook
# --NotebookApp.token ='machinelearning' is the password
CMD ["jupyter", "notebook", "--no-browser", "--ip=0.0.0.0", "--allow-root", "--NotebookApp.token='machinelearning'"]
