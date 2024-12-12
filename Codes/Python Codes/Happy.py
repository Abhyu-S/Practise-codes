#Happy: The Chatbot

import tkinter
import io
import random
import string # to process standard python strings
import warnings
import numpy as np
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.metrics.pairwise import cosine_similarity
import warnings
warnings.filterwarnings('ignore')

import nltk
from nltk.stem import WordNetLemmatizer
nltk.download('popular', quiet=True) # for downloading packages

#nltk.download('punkt') # first-time use only
#nltk.download('wordnet') # first-time use only

# Reading in the corpus
with open('chatbot.txt','r', encoding='utf8', errors ='ignore') as fin:
    raw = fin.read().lower()

# Tokenization
sent_tokens = nltk.sent_tokenize(raw)# converts to list of sentences 
word_tokens = nltk.word_tokenize(raw)# converts to list of words

# Preprocessing
lemmer = WordNetLemmatizer()
def LemTokens(tokens):
    return [lemmer.lemmatize(token) for token in tokens]
remove_punct_dict = dict((ord(punct), None) for punct in string.punctuation)
def LemNormalize(text):
    return LemTokens(nltk.word_tokenize(text.lower().translate(remove_punct_dict)))

# Keyword Matching
greeting_inputs = ('hello', 'hi', 'greetings', 'sup','hey')
greeting_responses = ['Hi', 'Hey', 'Hi there', 'Hello', "I'm glad, you are talking to me"]

def greeting(sentence):
    '''Greeting response towards the user's greeting input'''
    for word in sentence.split():
        if word.lower() in greeting_inputs:
            return random.choice(greeting_responses)       #return greeting_input[index(word.lower)+1]


# Generating response
def response(user_response):
    Happy_response=''
    sent_tokens.append(user_response)
    TfidfVec = TfidfVectorizer(tokenizer=LemNormalize, stop_words='english')
    tfidf = TfidfVec.fit_transform(sent_tokens)
    vals = cosine_similarity(tfidf[-1], tfidf)
    idx=vals.argsort()[0][-2]
    flat = vals.flatten()
    flat.sort()
    req_tfidf = flat[-2]
    if(req_tfidf==0):
        Happy_response=Happy_response+"I'm sorry! I don't understand you."
        return Happy_response
    else:
        Happy_response = Happy_response+sent_tokens[idx]
        return Happy_response


flag=True
print('Happy: My name is Pragyanam. I can talk about Chatbots.\n\
However, you may type "Bye" if you prefer to exit anytime during conversation!')
while(flag==True):
    user_response = input('You: ')
    user_response=user_response.lower()
    if(user_response!='bye'):
        if(user_response=='thanks' or user_response=='thank you' ):
            flag=False
            print('Happy: You are welcome!')
        else:
            if(greeting(user_response)!=None):
                print('Happy: '+greeting(user_response))
            else:
                print('Happy: ',end='')
                print(response(user_response))
                sent_tokens.remove(user_response)

def chat(user_response):
    user_response=user_response.lower()
    keyword = " module "
    keywordone = " module"
    keywordsecond = "module "
    
    if(user_response!='bye'):
        if(user_response=='thanks' or user_response=='thank you' ):
            flag=False
            #print("ROBO: You are welcome..")
            return "You are welcome.."
        elif(basicM(user_response)!=None):
            return basicM(user_response)
        else:
            if(user_response.find(keyword) != -1 or user_response.find(keywordone) != -1 or user_response.find(keywordsecond) != -1):
                #print("ROBO: ",end="")
                #print(responseone(user_response))
                return responseone(user_response)
                sent_tokensone.remove(user_response)
            elif(greeting(user_response)!=None):
                #print("ROBO: "+greeting(user_response))
                return greeting(user_response)
            elif(user_response.find("your name") != -1 or user_response.find(" your name") != -1 or user_response.find("your name ") != -1 or user_response.find(" your name ") != -1):
                return IntroduceMe(user_response)
            elif(basic(user_response)!=None):
                return basic(user_response)
            else:
                #print("ROBO: ",end="")
                #print(response(user_response))
                return response(user_response)
                sent_tokens.remove(user_response)

                
    else:
        flag=False
        print('Happy: Take care, bye!')
