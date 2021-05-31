# Shader

Learning Open Gl, Shaders and Ray tracing

## Ressources

- https://github.com/RayTracing/raytracing.github.io

- http://www.opengl-tutorial.org/

- https://learnopengl.com/book/book_pdf.pdf

  Boilerplate from https://github.com/HectorPeeters/opengl_premake_boilerplate.git

## Getting Started

Since this project builds all libraries from source and includes these as submodules, don't forget to clone the project recursively.

### Prerequisites

You will need premake5 to build this project. Download it [HERE](https://premake.github.io/download/html#v5).

### Building

Building the project is very easy. Use premake to generate the project files for your platform. Then use the correct build system to build the project.

#### Linux

```
premake5 gmake
make -j$(nproc)
```

#### Windows

```
premake5 vs2019
```

## Built With

- GLFW [Github](https://github.com/glfw/glfw)
- GLAD [Github](https://github.com/Dav1dde/glad)
- GLM [Github](https://github.com/g-truc/glm)

## License

This project is licensed under the MIT License.
