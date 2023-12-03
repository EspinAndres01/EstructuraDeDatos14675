import ctypes

# Ruta relativa a la DLL desde el directorio actual
dll_path = './AreasDLL.dll'

# Cargar la DLL
my_dll = ctypes.CDLL(dll_path)

# Definir el tipo de retorno y los argumentos de la función DLL
my_dll.areaCuadrado.restype = ctypes.c_double
my_dll.areaCuadrado.argtypes = [ctypes.c_double]

# Llamar a la función de la DLL
lado = 5
resultado = my_dll.areaCuadrado(ctypes.c_double(lado))

# Mostrar el resultado
print(f'El resultado del área es: {resultado}')
