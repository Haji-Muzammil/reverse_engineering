def generate_key(username):
    calculated_key = 0
    for char in username:
        calculated_key += ord(char)
    
    calculated_key = calculated_key * 0xCAFEE
    
    return calculated_key


user = input("Enter Username: ")
print(f"Valid Serial Key: {generate_key(user)}")
