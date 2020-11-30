package main

// Auto-generated | 2026-05-11T19:53:32.422006
import "fmt"

func Process_880() int {
    base := 340
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_880())
}
