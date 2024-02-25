# Data Structure Workouts Guide

### Table of Contents
1. [Getting Started](#getting-started)
2. [Data Structure Workouts](#data-structure-workouts)
3. [Local Development](#local-development)
4. [Running Tests](#running-tests)
5. [GitHub Actions Workflows](#github-actions-workflow)

## Getting Started
Before you start flexing those coding muscles, make sure you have the following prerequisites:
- **C++ Compiler:** We’ll be using g++ for compiling our code.
- **CMake:** For building and configuring our project.
- **Google Test:** Our trusty workout partner for testing.
Now, let’s get into the gym!

## Data Structure Workouts
This folder contains all of the workouts you’ll need to master data structures. Each sub-folder focuses on one core data structure. They’re your individual workouts to tone that muscle. In each sub-folder, follow these steps:

### 1. Read the Description
- Open the `<data_structure>.md` file.
- Review the description of the data structure.
- Try the knowledge checks and understand the coding challenges.

### 2. Function Definitions
- Check out the `<data_structure>-challenge.h` file.
- Find detailed explanations of the functions to complete.
- Check the function, struct, and macro definitions.

### 3. Time to Code 👈
- Open `<data_structure>-challenge.cpp` file.
- Fill out the functions. 

### 4. Test Your Gains
- Head to `<data_structure>-tests.cpp` file.
- Run these test cases against your functions.
- Add more tests if you’d like.

### 5. Rinse & Repeat
- Go between steps 3 and 4 until you've passed the tests and feel confident in your skills.

## Local Development
### Compiling Locally
To compile your `linked-list-challenge.cpp` locally (or any other data structure source file), follow these steps:

1. Navigate to the data structure sub-folder.
```ruby
cd "Data Structure Workouts/LinkedLists"
```

2. Run the following command:
```ruby
g++ -o a.out linked-list-challenge.cpp
```

### Running Locally
1. Execute the compiled program with:
```ruby
./a.out
```

### Running Tests
We take testing seriously at the Copilot Coding Gym. Here’s how you can build and run tests:

1. In the `System` folder, create a build directory:
```ruby
cd System
mkdir build
cd build
```

2. Configure CMake:
```ruby
cmake ..
```

> [!WARNING]
> Make sure you're in the build/ folder when running this.

3. Build the tests using make:
```ruby
make
```

> [!WARNING]
> Make sure you're in the build/ folder when running this.

4. See the tests you have available
```ruby
ls
```

> [!NOTE]
> All tests should follow the format of `<data structure>-test`.

5. Run the tests:
```ruby
./linked-list-test
```

### GitHub Actions Workflow
Not in the mood for local workouts? No problem! Head over to the **GitHub Actions** tab in your repository. There, you’ll find a workflow that automatically runs the tests for you. Click the button, grab some virtual dumbbells, and watch the magic happen!

1. Go to **GitHub Actions**:

    ![Header for GitHub with options for Code, Issues, Pull Request, Actions and more. Cursor hovers over Actions.](../System/assets/GitHub-Header-Light.png#gh-light-mode-only)
    ![Header for GitHub with options for Code, Issues, Pull Request, Actions and more. Cursor hovers over Actions.](../System/assets/GitHub-Header-Dark.png#gh-dark-mode-only)

2. Click on **Workout Tests** under **Workflows** in the sidebar.

    ![Home page for Actions with workflow options to the left.](../System/assets/GitHub-Actions-Light.png#gh-light-mode-only)
    ![Home page for Actions with workflow options to the left.](../System/assets/GitHub-Actions-Dark.png#gh-dark-mode-only)

3. On the right side, click **Run workflow**. When the drop-down appears, click **Run workflow** again unless your tests are on a branch other than `main`.

    ![Home page for Actions with workflow options to the left.](../System/assets/Run-Workflow-Light.png#gh-light-mode-only)
    ![Home page for Actions with workflow options to the left.](../System/assets/Run-Workflow-Dark.png#gh-dark-mode-only)


4. You should now see the test running. You cann click on the test once it's completed (passed or failed) to see the results of the test cases.

    ![Test queued up and running.](../System/assets/Progress-Light.png#gh-light-mode-only)
    ![Test queued up and running.](../System/assets/Progress-Dark.png#gh-dark-mode-only)

    > [!NOTE]
    > When it's queued and running, there is a yellow circle. When the run has failed, there is a red 'x'. When the run has passed, there is a green check. 

5. Click on **build** in the `testing.yml` box. Scroll down to **Run tests** and see the output of the test cases.

    ![Test output showing single test passed.](../System/assets/Done-Light.png#gh-light-mode-only)
    ![Test output showing single test passed.](../System/assets/Done-Dark.png#gh-dark-mode-only)
