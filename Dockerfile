FROM gcc:12-slim

RUN apt-get update && apt-get install -y \
    cmake \
    git \
    libeigen3-dev && \
    apt-get clean && rm -rf /var/lib/apt/lists/*

WORKDIR /app

COPY . .

RUN cmake -Bbuild -H. && cmake --build build

CMD ["./build/cpp_playground"]
