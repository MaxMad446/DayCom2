package main

// Auto-generated | 2026-05-12T04:42:46.363027
import "fmt"

func Process_406() int {
    base := 401
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_406())
}
