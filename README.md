# Tic-Tac-Toe Game

This is a command-line based implementation of the classic Tic-Tac-Toe game in C++. The game allows two players to take turns marking spaces on a 3x3 grid, with the goal of getting three of their marks in a horizontal, vertical, or diagonal row.

## Getting Started

To play the game, follow these simple steps:

1. **Compile the Game:**

   ```
   bashCopy code
   g++ -o tic_tac_toe main.cpp
   ```

2. **Run the Game:**

   ```
   bashCopy code
   ./tic_tac_toe
   ```

3. **Gameplay Instructions:**

   - Enter the names of the players when prompted.
   - Choose 'O' or 'X' as your mark.
   - Take turns entering the number of the spot where you want to place your mark.

4. **Winning the Game:**

   - The game ends when one player achieves three in a row.
   - If the grid is filled without a winner, the game ends in a draw.

## Project Structure

```
plaintextCopy codetic_tac_toe/
|-- main.cpp                (source code)
|-- Player.h                (player class definition)
|-- TicTacToe.h             (main game class definition)
|-- TicTacToeFunction.h     (helper class for game functions)
|-- README.md               (project documentation)
```

## How to Play

- Players take turns to input their names and choose their marks.
- The game prompts each player to make a move by entering the number of the spot on the grid.
- The game ends when a player gets three marks in a row, or the grid is filled without a winner.

## Contributions

Contributions are welcome! If you find any issues or have suggestions for improvements, feel free to open an issue or create a pull request.