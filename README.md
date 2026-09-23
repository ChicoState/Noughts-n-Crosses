# Noughts and Crosses

[![Build, Test, and Release](https://github.com/ChicoState/Noughts-n-Crosses/actions/workflows/build-test-release.yml/badge.svg)](https://github.com/ChicoState/Noughts-n-Crosses/actions/workflows/build-test-release.yml)

A simple command-line Noughts and Crosses game written in C++. The player uses
`X`, the computer uses `O`, and the program detects wins, draws, invalid moves,
and basic computer strategy.

## Getting Started

This repo is compatible with the [cpp-container](https://github.com/ChicoState/cpp-container) docker container.

To run tests:

```bash
docker run -v "$(pwd)":/usr/src -it cpp-container
```

To work manually within the container:

```bash
docker run -v "$(pwd)":/usr/src -it cpp-container sh
```

(to quit type the command `exit` or press `Ctrl+D`)

### ...or doing things manually
Compile the program:

```bash
g++ -std=c++17 main.cpp -o noughts-crosses
```

Compile and run the tests:

```bash
sh test_runner.sh
```

Run the program:

```bash
./noughts-crosses
```
