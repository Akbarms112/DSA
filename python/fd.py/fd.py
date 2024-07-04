Operators=set(['+','-','*','/','(',')','^'])
Priority={'+':1,'-':1,'*':2,'/':2,'^':3}

def infixTopostfix(expression):
    stack=[]
    output=""
    for Character in expression:
        if Character not in Operators:
          output+=Character
        elif Character=='(':
          stack.append('(')
        elif Character==')':
            while stack and stack[-1]!='(':
                output+=stack.pop()
                stack.pop()
            else: 
                while stack and stack[-1]!='('and Priority[Character]<=Priority[stack[-1]]:
                   output+=stack.pop()
                stack.append(Character)
        while stack:    
           output+=stack.pop()
        return output
expression=input("Enter infix expression")
print("infix notation:",expression)
print("postfix notation:",infixTopostfix(expression))