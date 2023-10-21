# Example SDL2/cmake project

To generate the build system with cmake, do
```bash
cmake -B bin
```

Note that if you've had an error generating the build system, it's recommended to first to first remove the old one when retrying:
```bash
 rm -rf bin && cmake -B bin
```

Then to build, do
```bash
cmake --build bin
```

And finally to run, do
```bash
./bin/TowerDefence
```
