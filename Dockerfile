FROM ubuntu:14.04

RUN apt-get update && apt-get -y --no-install-recommends install \
    build-essential \
    libsdl1.2-dev

RUN mkdir /compile-dir
WORKDIR /compile-dir

ENTRYPOINT ["/bin/bash", "-c"]
CMD ["make"]
