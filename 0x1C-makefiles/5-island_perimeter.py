#!/usr/bin/python3
""" doc doc """


def island_perimeter(grid):
    """doc doc"""
    counter = 0
    for row_i in range(len(grid)):
        for col_i in range(len(grid[row_i])):
            if grid[row_i][col_i] == 1:
                counter += count_water(grid, row_i, col_i)
    return counter


def count_water(grid, row_i, col_i):
    """doc doc"""
    counter = 0
    value = grid[row_i][col_i]
    max_i_col = len(grid[row_i]) - 1
    max_i_row = len(grid) - 1
    if col_i > 0:
        left = grid[row_i][col_i - 1]
        if left == 0:
            counter += 1
    else:
        counter += 1
    if col_i < max_i_col:
        right = grid[row_i][col_i + 1]
        if right == 0:
            counter += 1
    else:
        counter += 1
    if row_i > 0:
        up = grid[row_i - 1][col_i]
        if up == 0:
            counter += 1
    else:
        counter += 1
    if row_i < max_i_row:
        down = grid[row_i + 1][col_i]
        if down == 0:
            counter += 1
    else:
        counter += 1
    return counter
