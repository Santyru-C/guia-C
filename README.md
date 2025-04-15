# tp-C
Guía introductoria de C

## Issues

En caso de encontrar errores o sugerencias, crear un Issue 

## Building

Para buildear los pdfs se necesita tener una instalación de `texlive` y `make`:

Simplemente hacer:
```bash
make pdfs
```

Se puede buildear con la imagen de docker, seteando la variable `DOCKER_BUILD` haciendo:
```bash
DOCKER_BUILD=1 make pdfs
```
Esto va a crear un contenedor de docker y va a buildear el pdf dentro del contenedor.

### Release build

Es necesario tener instalado [bump-my-version](https://github.com/callowayproject/bump-my-version). Se puede instalar con [uv](https://docs.astral.sh/uv/):

```bash
uv tool install bump-my-version
```

Para generar un release, teniendo un working directory limpio en el branch `main`, se puede hacer:

```bash
make release <version>
```

`<version>` puede ser `patch`, `minor` o `major`, y va a generar un tag con la versión correspondiente. Esto dispará un build en github actions, que va a generar un release con los pdfs.
