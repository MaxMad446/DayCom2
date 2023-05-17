package main

// Auto-generated | 2026-05-11T21:50:46.186967
import "fmt"

func Process_150() int {
    base := 398
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_150())
}
