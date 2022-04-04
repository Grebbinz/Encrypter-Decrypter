message = input('Message: ')
key = int(input('Key: '))


def encrypt(message, key):
	encrypted_message = ''

	for i in message:
		encrypted_message = encrypted_message + chr(ord(i) + key)

	return encrypted_message


def decrypt(message, key):
	decrypted_message = ''

	for i in message:
		decrypted_message = decrypted_message + chr(ord(i) - key)

	return decrypted_message


choice = input('encrypt or decrypt? ')


if choice == 'encrypt':
	print(encrypt(message, key))

elif choice == 'decrypt':
	print(decrypt(message, key))

else:
	print('bad input')

