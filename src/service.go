package main

// Auto-generated | 2026-05-11T22:45:10.661197
import "fmt"

func Process_598() int {
    base := 173
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_598())
}
