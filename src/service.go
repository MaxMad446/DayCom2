package main

// Auto-generated | 2026-05-13T22:12:00.926880
import "fmt"

func Process_736() int {
    base := 264
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_736())
}
