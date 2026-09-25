# Функция square с аннотациями типов
def square(x: int) -> int:
    """Вычисляет квадрат числа"""
    return x * x


def main():
    # Аннотации типов для переменных
    number: int = 7
    result: int = square(number)
    
    print(f"Число: {number}")
    print(f"Квадрат: {result}")


if __name__ == "__main__":
    main()