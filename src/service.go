package main

// Auto-generated | 2026-05-12T19:58:36.941094
import "fmt"

func Process_484() int {
    base := 125
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_484())
}
