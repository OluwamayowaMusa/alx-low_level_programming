#!/usr/python3
""" A module to calculate the perimeter of an Island

"""


def island_perimeter(grid):
    """ Calculates the Perimeter of an Island

    Args:
        grid (list of list of integers): The shape of the Island where
                                        0 represents a water zone
                                        1 represents a land zone

    Return:
        The perimeter of the Island
    """
    count = 0
    index_list = []
    for index_1, inner_list in enumerate(grid):
        for index_2, num in enumerate(inner_list):
            if num == 1:
                count += 1
                index_list.append([index_1, index_2])
    tmp_area = count * 4
    for index in index_list:
        tmp_list = []
        tmp_list.extend([[index[0] - 1, index[1]],
                        [index[0] + 1, index[1]],
                        [index[0], index[1] - 1],
                        [index[0], index[1] + 1]])
        for tmp_index in tmp_list:
            if tmp_index in index_list:
                tmp_area -= 1
    return (tmp_area)
