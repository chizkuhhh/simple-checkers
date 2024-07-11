# simple-checkers
This is a simple implementation of the classic checkers game designed to be played in the terminal. The game is written in C and provides a text-based interface for users to play against each other on the same machine.

## Features
- Interactive gameplay with text-based interface.
- Implements basic rules of checkers, including regular moves and captures.
- Turn-based play for two players.
- Dark plays first, and moves are entered in a format like A5B6 for moving from A5 to B6.
- Detection of invalid moves and capturing one piece at a time.

## How to Use
1. **Compile the Game:**
   ```bash
     gcc CAPIO_MP_SimpleCheckers.c -o checkers
   ```
2. **Run the Executable:**
   ```bash
     ./checkers
   ```

3. **Gameplay Instructions:**
- Dark starts first.
- Enter moves in the format A5B6 to move a piece from A5 to B6.
- The game validates moves for correctness.
- Players take turns making moves.
- Capture opponent's pieces by jumping over them diagonally, one at a time.
