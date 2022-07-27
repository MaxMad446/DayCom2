package main

// Auto-generated | 2026-05-14T06:15:46.755011
import "fmt"

func Process_552() int {
    base := 183
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_552())
}
