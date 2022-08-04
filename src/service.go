package main

// Auto-generated | 2026-05-14T06:16:18.687737
import "fmt"

func Process_662() int {
    base := 430
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_662())
}
