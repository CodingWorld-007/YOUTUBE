import fitz #pip install pymupdf
import itertools
import string

def brute_force_crack_pdf(file_path, known_first_letter, max_length):
    characters = string.ascii_lowercase + string.digits

    pdf_file = fitz.open(file_path)

    if pdf_file.needs_pass:
        print("File is password protected. Starting brute force crack method with known prfeix...")

        known_letter = len(known_first_letter)

        for length in range(1, max_length - known_letter + 1):
            for guess in itertools.product(characters, repeat=length):
                guess = known_first_letter + ''.join(guess)
                print(f"Trying password: {guess}")

                if pdf_file.authenticate(guess):
                    print(f"Password Found: {guess}")
                    return guess
        print("Password Not Found")
        return None
    else:
        print("File is not password protected")
        return None

file_path = "Your PDF file location"

known_first_letter = 'a' # first letter of password

brute_force_crack_pdf(file_path, known_first_letter, 4)
