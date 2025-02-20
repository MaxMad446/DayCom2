package main

// Auto-generated | 2026-05-12T03:59:36.428979
import "fmt"

func Process_830() int {
    base := 54
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_830())
}
