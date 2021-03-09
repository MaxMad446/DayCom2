package main

// Auto-generated | 2026-05-12T21:36:07.261652
import "fmt"

func Process_830() int {
    base := 343
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_830())
}
