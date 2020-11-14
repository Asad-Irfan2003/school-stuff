Module Middlestr

    Sub Main()
        'Decleration
        Dim x, middleStr As String
        Dim sp1, sp2 As Integer

        'Initialization
        sp1 = 0
        sp2 = 0
        x = ""
        middleStr = ""

        'Input or 3 names
        Console.Write("input 3 names: ")

        'Working for middle string
        x = Console.ReadLine()
        sp1 = InStr(x, " ")
        sp2 = InStr(sp1 + 1, x, " ")
        middleStr = Mid(x, sp1 + 1, sp2 - sp1)

        'Output of middle string
        Console.WriteLine(middleStr)
        Console.ReadKey()



    End Sub

End Module
