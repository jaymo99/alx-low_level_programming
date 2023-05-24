#!/usr/bin/python3
'''Technical interview preparation

Create a function 'island_perimeter(grid)' that returns the
perimeter of the island described in grid.

    grid is a list of list of integers
        -> 0 represents a water zone
        -> 1 represents a land zone
        -> One cell is a square with side length 1
        -> Grid cells are connected horizontally/vertically
            (not diagonally)
        -> Grid is rectangular, width and height don't exceed 100
        -> Grid is completely surrounded by water, and there is one
            island (or nothing).
        -> The island doesn't have "lakes" (water inside that isn't
            connected to the water around the island).
'''


def island_perimeter(grid):
    '''returns the perimeter of the island described in grid

    Args:
        grid (list): list of list of integers
    '''
    perimeter = 0
    grid_width = isvalid_grid(grid)
    if not grid_width or not is_island(grid):
        return 0

    grid_height = len(grid)

    for row_index, row in enumerate(grid):
        for col_index, col in enumerate(row):
            if col == 0:
                continue

            '''check top adjacent cell'''
            if grid[row_index - 1][col_index] == 0:
                perimeter += 1

            '''check bottom adjacent cell'''
            if grid[row_index + 1][col_index] == 0:
                perimeter += 1

            '''check left-side adjacent cell'''
            if row[col_index - 1] == 0:
                perimeter += 1

            '''check right-side adjacent cell'''
            if row[col_index + 1] == 0:
                perimeter += 1
    return perimeter


def isvalid_grid(grid):
    '''validates grid representation of an island

    Args:
        grid (list): list of list of integers

    Returns:
        0 if the @grid is not valid
        else return width of grid
    '''
    if (grid is None) or not isinstance(grid, list):
        print("Invalid input! Not a grid")
        return 0

    if len(grid) < 3:
        print("Invalid grid! Not an island")
        return 0

    if not isinstance(grid[0], list) or len(grid[0]) < 1:
        print("Invalid input! Not a grid")
        return 0

    grid_width = len(grid[0])
    for row in grid:
        if not isinstance(row, list)\
                or len(row) != grid_width:
            print("Invalid input! Not a grid")
            return 0

        if any(not isinstance(col, int) for col in row):
            print("Invalid values. non-integer")
            return 0

    return grid_width


def is_island(grid):
    '''checks if a grid represents an island
    All the cells along the edges of the grid must be 0

    Returns:
        True if grid represents an island
        False otherwise.
    '''
    if any(cell > 0 for cell in grid[0]):
        return False
    if any(cell > 0 for cell in grid[-1]):
        return False

    for row in grid:
        if row[0] > 0:
            return False
        if row[-1] > 0:
            return False
    return True
