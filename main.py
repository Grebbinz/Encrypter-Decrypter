# Encrypts or decrypts a line of text

def encrypt(message, key):
	encrypted_message = ''

	for i in message:
		encrypted_value = ord(i) + key

		while encrypted_value < 32:
			encrypted_value += 94

		while encrypted_value > 127:
			encrypted_value -= 94

		encrypted_message = encrypted_message + chr(encrypted_value)

	return encrypted_message


def decrypt(message, key):
	decrypted_message = ''

	for i in message:
		decrypted_value = ord(i) - key

		while decrypted_value < 32:
			decrypted_value += 94

		while decrypted_value > 127:
			decrypted_value -= 94

		decrypted_message = decrypted_message + chr(decrypted_value)

	return decrypted_message


message = input('Message: ')
key = int(input('Key: '))

choice = input('encrypt or decrypt? ')


if choice == 'encrypt':
	print(encrypt(message, key))

elif choice == 'decrypt':
	print(decrypt(message, key))

else:
	print('bad input')

