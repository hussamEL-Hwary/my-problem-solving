# Author: Hussam
# description: https://leetcode.com/problems/unique-email-addresses/
# time: O(n*m), space: O(n)


class Solution:
    def numUniqueEmails(self, emails):
        """
        :type emails: List[str]
        :rtype: int
        """
        # add unique emails in dictionary
        uniqueMail = {}
        for email in emails:
            currentMail = ""
            
            for i in email:
                if i == '.':
                    continue
                elif i == '+' or  i == '@':
                    currentMail += email[email.find('@'):]
                    break
                else:
                    currentMail += i
                    
            if currentMail not in uniqueMail.keys():
                uniqueMail[currentMail] = True

        # count number of different emails
        return len(uniqueMail)
