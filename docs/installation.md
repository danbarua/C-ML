# Installation

## Prerequisites

- GCC (GNU Compiler Collection)
- `make` build tool
- Supported Platforms: Linux, macOS, Windows (via WSL)

## Steps

1. Clone the repository:
   ```bash
   git clone https://github.com/jaywyawhare/C-ML.git
   cd C-ML
   ```

2. Build the project:
   ```bash
   make
   ```

3. Run the example program:
   ```bash
   ./bin/main
   ```

4. Run all tests:
   ```bash
   make test
   ```

   Run specific tests:
   ```bash
   make test TEST_SRCS="test/Layers/test_dense.c"
   ```


> **Note**: Ensure that GCC and `make` are installed and available in your system's PATH.
