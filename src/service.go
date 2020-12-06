package main

// Auto-generated | 2026-05-14T18:09:00.502455
import "fmt"

func Process_652() int {
    base := 78
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_652())
}
