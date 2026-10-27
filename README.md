 # Tesseract

  Tesseract es un juego estilo *Flappy Bird* con estética techno, desarrollado en C++ con
  [raylib](https://www.raylib.com/).

  Controlás una nave que debe esquivar los obstáculos que avanzan desde la derecha. Si chocás, perdés.

  > Trabajo práctico de **Práctica Profesional I: Desarrollo de Videojuegos I** — Image Campus, 2026.
  > El juego se desarrolla de forma iterativa: cada versión agrega nuevas funcionalidades.

  ## Versión actual: 0.1

  - Nave controlable en el lado izquierdo de la pantalla.
  - Un obstáculo que avanza hacia la izquierda y reaparece por la derecha a otra altura.
  - Condición de derrota al colisionar, con pantalla de Game Over y reinicio.

  ## Controles

  | Tecla | Acción |
  |---|---|
  | ↑ / ↓ | Mover la nave |
  | Enter | Reiniciar tras perder |
  | Esc | Salir |

  ## Cómo compilar

  1. Clonar el repositorio.
  2. Abrir `Tesseract.slnx` con Visual Studio.
  3. Seleccionar la configuración **Debug** o **Release** en **x64**.
  4. Compilar y ejecutar (F5).

  raylib 6.2 ya viene incluida en `lib/`, no hace falta instalar nada extra.

  ## Descargas

  Los ejecutables de cada versión están disponibles en la sección
  [Releases](https://github.com/IvanAbraham/Tesseract/releases).

  ## Autor

  **Ivan Abraham** — [GitHub](https://github.com/IvanAbraham)

  Algunas notas:
  - El idioma: lo escribí en castellano porque el profe es el lector principal. Los textos del juego y los commits están
    en inglés, y el PDF de código pide consistencia, pero habla del código y no del README. Si preferís todo en inglés,
    te lo traduzco.
  - "Versión actual": actualizá esa sección en cada iteración. También te sirve de changelog para la descripción de cada
    Release.
  - El link a itch: el TP dice que no hagas la página en esta etapa. Cuando la tengas, agregala en el README y en el
    "About" del repo.
