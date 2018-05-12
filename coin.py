COINS_SIZE = 6
coins = [1, 5, 10, 25, 50, 100]

def solve(value: int):
    answer = list()

    for coin in reversed(coins):
        while value >= coin:
            value -= coin
            answer.append(coin)

    return answer


def main():
    solution = solve(int(input("Insira um numero: "))) 

    for element in solution:
        print((str(element) + 'c') if element != 100 else '1R' , end=' ')

if __name__ == '__main__':
    main()

