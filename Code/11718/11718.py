while True:

    try : 
        s = input().strip()
        print(s)
    except EOFError:
        break