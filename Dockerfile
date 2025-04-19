FROM gcc:12

# Install build tools and Eigen
RUN apt-get update && apt-get install -y \
    cmake \
    git \
    libeigen3-dev

# Set working directory
WORKDIR /app

# Copy the full project into the container
COPY . .

# Configure and build
RUN cmake -Bbuild -H. && cmake --build build

# Run the compiled binary
CMD ["./build/cpp_playground"]
