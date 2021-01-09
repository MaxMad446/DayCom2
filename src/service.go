package main

// Auto-generated | 2026-05-11T19:58:42.599007
import "fmt"

func Process_830() int {
    base := 190
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_830())
}
