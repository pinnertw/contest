Cplusplus = True

with open("out1", "r") as f1:
    with open("out2", "r") as f2:
        with open("out3", "r") as f3:
            lines3 = f3.readlines()
            lines2 = f2.readlines()
            lines1 = f1.readlines()

            # C++
            try:
                verdict = True

                for i, line in enumerate(lines3):
                    verdict = verdict and line == lines1[i]
                print("Verdict for C++ : ", verdict)
            except:
                print("If you did give an C++ file, it might be WA.")
            # Python
            try:
                verdict = True

                for i, line in enumerate(lines3):
                    verdict = verdict and line == lines2[i]
                print("Verdict for C++ : ", verdict)
            except:
                print("If you did give an python file, it might be WA.")
