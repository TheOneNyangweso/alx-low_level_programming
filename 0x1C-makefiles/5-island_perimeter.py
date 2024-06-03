#!/usr/bin/python3

"""
** Island Perimeter **

Technical interview preparation:

You are not allowed to google anything
Whiteboard first
Create a function def island_perimeter(grid): that returns the perimeter
of the island described in grid:

grid is a list of list of integers:
0 represents a water zone
1 represents a land zone
One cell is a square with side length 1
Grid cells are connected horizontally/vertically (not diagonally).
Grid is rectangular, width and height don't exceed 100
Grid is completely surrounded by water, and there is one island (or nothing).
The island doesn't have “lakes” (water inside that isn't connected to
the water around the island).

Requirements:

First line contains #!/usr/bin/python3
You are not allowed to import any module
Module and function must be documented

"""


def island_perimeter(grid):
    """function that returns the perimeter of the island described in grid.

    Args:
        grid (arr): a list of list of integers.

    Returns:
        perimeter of the island.
    """
    perimeter = 0
    count_of_ones = sum([a.count(1) for a in grid])

    if count_of_ones <= 0:
        return 0
    if count_of_ones == 1:
        return 4
    else:
        length = [ls.count(1) for ls in grid if ls.count(1) > 0]
        perimeter = (max(length) + len(length)) * 2

    return perimeter
