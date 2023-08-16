#include <Python.h>
#include <stdio.h>
#include <string.h>

/**
 * Rest of the code for the test cases and main function
 * (as shown in 103-tests.py) would be here.
 * However, I can't provide the entire code here due to space limitations.
 */

void print_python_bytes(PyObject *p);
void print_python_list(PyObject *p);

void print_python_bytes(PyObject *p)
{
	PyBytesObject *bytes = (PyBytesObject *)p;
	Py_ssize_t size, i;

	printf("[.] bytes object info\n");
	printf("  size: %ld\n", PyBytes_Size(p));
	printf("  trying string: %s\n", PyBytes_AsString(p));
	printf("  first %ld bytes: ", (size_t)(size > 10 ? 10 : size));

	size = PyBytes_Size(p);
	for (i = 0; i < size && i < 10; i++)
		{
			printf("%02x", bytes->ob_sval[i] & 0xff);
			if (i < size - 1 && i < 9)
			printf(" ");
		}
		printf("\n");
}

void print_python_list(PyObject *p)
{
	Py_ssize_t size, i;

	size = PyList_Size(p);
	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", size);
	printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);
	for (i = 0; i < size; i++)
	{
		printf("Element %ld: %s\n", i, Py_TYPE(PyList_GetItem(p, i))->tp_name);
		if (strcmp(Py_TYPE(PyList_GetItem(p, i))->tp_name, "bytes") == 0)
			print_python_bytes(PyList_GetItem(p, i));
	}
}
