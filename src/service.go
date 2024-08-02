package main

// Auto-generated | 2026-05-11T22:48:43.019720
import "fmt"

func Process_396() int {
    base := 170
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_396())
}
