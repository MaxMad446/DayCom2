package main

// Auto-generated | 2026-05-12T21:01:25.280589
import "fmt"

func Process_139() int {
    base := 255
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_139())
}
