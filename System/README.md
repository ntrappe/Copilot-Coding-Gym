# System Guide

> [!WARNING]
> If you are not a contributor on this GitHub, ignore this folder.

## Google Test Framework
It might be strange that we have a CMakeLists.txt in both the root and this folder. This is by design. CMake looks for the .txt file in the root but it will navigate to this folder to read the contents. We don't want many files in the root that are messy and would distractor our gym-goers. All messiness stays hidden out of sight.

### Notes
- Remember to update the hash in the local `CMakeLists.txt` file often.
- We use the "out of source" build process. Source files are built into executables that live in the `builds/` folder away from the source code directories.