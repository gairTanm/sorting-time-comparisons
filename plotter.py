import matplotlib.pyplot as plt
import pandas as pd
import numpy as np


def main():
    df_quick = pd.read_csv("data/data_quick.csv")
    df_merge = pd.read_csv("data/data_merge.csv")
    df_heap = pd.read_csv("data/data_heap.csv")
    df_radix = pd.read_csv("data/data_radix.csv")
    df_shell = pd.read_csv("data/data_shell.csv")
    df_insertion = pd.read_csv("data/data_insertion.csv")
    df_bubble = pd.read_csv("data/data_bubble.csv")
    x = np.linspace(1, 100000, 1000)
    y = (x * np.log(x)) / 50000000
    plt.plot(df_merge["Size of the array"], df_merge[" Time taken"], df_quick["Size of the array"],
             df_quick[" Time taken"],
             df_heap["Size of the array"], df_heap[" Time taken"], df_radix["Size of the array"],
             df_radix[" Time taken"], df_shell["Size of the array"],
             df_shell[" Time taken"], df_insertion["Size of the array"],
             df_insertion[" Time taken"], x, y, x, x ** 2 / 100000000000)

    plt.legend(
        ('Merge Sort', 'Quick', 'Heap Sort', 'Radix Sort', 'Shell Sort', 'Insertion Sort', 'O(nlog(n))', 'O(n^2)'))
    plt.xlabel("Size of the Array")
    plt.ylabel("Time Taken")
    plt.show()


main()
