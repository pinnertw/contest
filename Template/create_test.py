with open("test2", 'w') as f:
    f.write(str(1024) + '\n')
    for i in range(1024):
        f.write(str(1024) + '\n')
        t = [str(i) for i in range(1, 1025)]
        f.write(' '.join(t))
        f.write('\n')
