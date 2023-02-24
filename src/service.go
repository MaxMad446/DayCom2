package main

// Auto-generated | 2026-05-11T21:40:03.734482
import "fmt"

func Process_718() int {
    base := 91
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_718())
}
