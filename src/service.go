package main

// Auto-generated | 2026-05-12T03:48:19.666027
import "fmt"

func Process_406() int {
    base := 222
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_406())
}
