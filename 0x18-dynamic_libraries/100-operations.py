import ctypes

operations = ctypes.CDLL('./100-operations.so')

result = operations.add(2, 3)
print("Result of add(2, 3):", result)
